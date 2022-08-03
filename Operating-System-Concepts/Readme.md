# OS Fundamentals

-   Introduction
-   UNIX Architecture
-   Logging In
-   Files and Directories
-   Input and Output
-   Programs and Processes
-   Error Handling
-   User Identification
-   Time Values
-   System Calls and Library Functions
-   Memory Layout
-   Call Stack
-   CPU Scheduling
-   NullReferenceException
-   Organize the code into Header and Source files
-   Understanding Memory allocations, Heap Memory Management, Memory Leaks. GC  – Sample code with C++,Java
-   Stack Memory, Stack overflow, Stack Corruption, Stack Registers – Sample code with C++,Java
-   Paging Concepts and Page Tables
-   Static and Dynamic Libraries and Linking

# What is an operating system?

-   It is a program that acts as an interface between the user and the computer hardware
-   It controls the execution of application programs that are installed on the computer
-   Computers come with BIOS chip on their motherboard that has read-only instructions to trigger the loading of OS program into the priary memory from BOOT sector of a disk (SSD, harddisk, pendrive, CD-ROM or even a floppy disk)
-   Once OS is loaded into the memory, then onwards it takes control of all hardware and programs
-   The first program to run and the last program to quit
-   The core part of any OS is called as **Kernel**
-   ![](./images/os.dio.png)

# What are the features of an OS?

-   Provides convenience to the user for using the computer hardware
-   Efficienct: OS allows computer resources to be used efficiently
-   Ability to evolve
-   Better throughput: can handle maximum tasks at a given time

# What are the major responsibilities of an OS?

-   Resource Management: Whenever an application/program needs a resource (memory/cpu/disk/io/network/etc) the OS should manage and provide enough resources to the application/program
-   Proocess Management
-   Memory management
-   Storage management
-   Security
-   Privacy management

# MS-DOS (MicroSoft Disk Operating System)

-   Was made up of 3 files: command.com, io.sys and console.sys
-   Command.com gets loaded into the RAM and provides a prompt (A:\> or B:\> or C:\>)
-   Drives are represented using letters A, B, C etc
    -   A and B for floppy disks and C onwards is for hard drives
-   Command.com handles internal commands
    -   dir, cd, md, copy, etc.

# Unix OS

-   A centralized operating system
-   There is only one computer with CPU, RAM and Storage
-   Thousands of dumb terminals (no CPU, RAM, Storage, but only monitory and keyboard) connected the server

![](./images/unix.dio.png)
