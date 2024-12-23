# CPP Primer

## Description
`cpp_primer` is a C++ sample project that provides additional examples and notes to enhance understanding of various C++ programming concepts. The project is organized into multiple chapters, each focusing on different topics covered in the *C++ Primer 5th Edition* book. By providing practical code samples, `cpp_primer` serves as an additional resource for beginner C++ developers. The project is built using CMake, ensuring a straightforward and platform-independent build process.

## Usage
### Install Required Tools
To run a C++ project using CMake and Make on Linux, you'll need to ensure the required dependencies are installed.
```sh
$ sudo apt install cmake
$ sudo apt install build-essential
$ sudo apt install g++
```

### Cloning the Project
```sh
$ git clone https://github.com/KANGWEII/cpp_primer.git
```

### Building the Project
To build the project, ensure CMake is installed. Navigate to the root directory of the project and run the following commands:
```sh
$ cd cpp_primer
$ mkdir build && cd build
$ cmake ..
$ make
```

### Running Example
After building the project, run the compiled examples located in the `/bin` directory. For example, to run the `compound_types` example:

```sh
$ ./bin/compound_types
```