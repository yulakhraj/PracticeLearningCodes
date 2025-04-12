package fileHandellingLearning;
// program for creating a file
import java.io.File;
import java.io.IOException;

public class CreateFile {
    public static void main(String[] args) throws IOException {
        System.out.println("file handling examples");
        File obj = new File("manish.txt");
        if(obj.createNewFile()){
            System.out.println("File created: "+ obj.getName());
        } else{
            System.out.println(" file is already exists. ");

        }
    }
}
