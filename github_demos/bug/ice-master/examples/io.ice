package main;

use io;

func main() int32 {
    var file *io.file;

    file = new io.file;
    file.open("output.txt", "w+");
    file.write("Hello World");
    file.close();
    delete file;

    return 0;
}

