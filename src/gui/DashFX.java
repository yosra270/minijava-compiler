package gui;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextArea;
import javafx.scene.input.KeyEvent;
import javafx.scene.input.MouseEvent;
import javafx.scene.paint.Paint;
import javafx.stage.FileChooser;

import java.io.*;
import java.net.URL;
import java.util.ResourceBundle;
import java.util.Scanner;

public class DashFX implements Initializable {

    FileChooser fileChooser = new FileChooser();
    File sourceCodeFile = null;
    boolean isWritingNewFile = false;


    @FXML
    private TextArea compileErrors;

    @FXML
    private Label fileName;

    @FXML
    private TextArea codeText;

    @FXML
    void clearAllErrors(MouseEvent event) {
        compileErrors.setText("");
    }

    @FXML
    void newFile(MouseEvent event) {
        codeText.setText("");
        codeText.setEditable(true);
        codeText.setOpacity(0.7);
        fileName.setText("* untitled");
        fileName.setTextFill(Paint.valueOf("#b86fe2"));
        isWritingNewFile = true;
    }

    @FXML
    void compileFile(MouseEvent event) {
        if (sourceCodeFile != null) {
            // clean previous errors
            compileErrors.setText("");

            // execute compile command
            ProcessBuilder processBuilder = new ProcessBuilder().command("make","compile", "file="+sourceCodeFile.getPath());
            processBuilder.directory(new File("src/compiler"));
            try {
                Process process = processBuilder.start();
                process.waitFor();
                process.destroy();
            } catch (IOException | InterruptedException e) {
                e.printStackTrace();
            }

            // write errors in the gui
            try {
                File errorsFile = new File("src/compiler/out.txt");
                Scanner reader = new Scanner(errorsFile);
                while (reader.hasNextLine()) {
                    String error = reader.nextLine();
                    compileErrors.appendText(error + "\n");
                }
                reader.close();
            } catch (FileNotFoundException e) {
                e.printStackTrace();
            }
        }
    }

    @FXML
    void dirtyText(KeyEvent event) {
        if(fileName.getText().charAt(0) != '*' && codeText.isEditable()) {
            fileName.setText("* " + fileName.getText());
            fileName.setTextFill(Paint.valueOf("#b86fe2"));
        }
    }

    @FXML
    void openFile(MouseEvent event) {
        fileChooser.setTitle("Open file");
        sourceCodeFile = fileChooser.showOpenDialog(null);

        try {
            Scanner scanner = new Scanner(sourceCodeFile);
            codeText.setText("");
            while(scanner.hasNextLine()) {
                codeText.appendText(scanner.nextLine() + "\n");
            }
            codeText.setEditable(true);
            codeText.setOpacity(0.7);
            fileName.setText(sourceCodeFile.getName());
        } catch (FileNotFoundException e) {
            System.out.println("File is invalid !");
        }
    }

    @FXML
    void saveFile(MouseEvent event) {
        if(codeText.isEditable()){
            if (isWritingNewFile) {
                fileChooser.setTitle("Save file");
                sourceCodeFile = fileChooser.showSaveDialog(null);
                fileName.setText(sourceCodeFile.getName());
            }
            try {
                FileWriter writer = new FileWriter(sourceCodeFile.getPath());
                writer.write(codeText.getText());
                writer.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
            isWritingNewFile = false;
        }

        if(fileName.getText().charAt(0) == '*' && codeText.isEditable()) {
            fileName.setText(fileName.getText().substring(2));
            fileName.setTextFill(Paint.valueOf("#6f6fe4"));
        }
    }

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        fileChooser.setInitialDirectory(new File(System.getProperty("user.home")));
        fileChooser.getExtensionFilters().addAll(
                new FileChooser.ExtensionFilter("Java files", "*.java"),
                new FileChooser.ExtensionFilter("Text files", "*.txt")
        );
    }
}
