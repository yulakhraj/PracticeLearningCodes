package fileHandellingLearning;
import java.io.FileWriter;
import java.io.IOException;

public class WriteFile {
    public static void main(String[] args) throws IOException {
        FileWriter obj = new FileWriter("manish.txt");
        obj.write("Hello I am Manish Raj. I am AWS developer: ");
        obj.close();
        System.out.println("successful written in manish.txt file");
    }
}
