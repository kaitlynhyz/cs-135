## C Data Types
Conversion Specifier (X) | Data Type
--------|-------------
d | integer format
f | float format
lf | double format
c | character format

## Basic Linux Commands
Command | Description | Example
--------|-------------|---------
mkdir | Make directory. This command will create a folder (otherwise known as a directory). | `mkdir ExampleFolder` 
cd | Change Directory. This command will change from your current directory into the one specified. | `cd ExampleFolder` 
touch | This will create a file with the specified name. | ```touch ExampleFile.c``` 
gedit | If gedit is installed this will open the specified file in gedit. If the file does not exist, then one will be created. | ```gedit ExampleFile.c```
rmdir | This will remove the specified directory. This only works if the specified directory is empty. | ```rmdir GoodbyeFolder```
rm | This command will delete files and directories. Use "rm-r" to delete just the directory. It deletes both the folder and the files it contains when using only the rm command. | ```rm file.txt``` to delete file.txt **OR** ```rm -r ByeFolder``` to remove the directory ByeFolder
ls | This command will list all thefiles and directories in the current directory. | ```ls```
