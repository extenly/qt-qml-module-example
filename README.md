# qt-qml-module-example
This project is an example showing how to create a Qt plugin and integrate it in QML by registering the C++ classes as QML types. The project was created as part of [this](https://extenly.com/2020/01/29/integrating-qt-to-qml-step-by-step-beginner-guide/) guide and in no case is meant to be a real printer device UI or to describe a real interface for a printer device settings.

# Build & Installation
To build and install use
``mkdir build && cd build``

From the *build* folder, run:  
``
path/to/your/Qt/bin/qmake ../qt-qml-module-example/
``  

then do:  
``make && make install``

# Running the application
From the *build* folder, run
``
./src/bin/printerui
``

# License
This software is available under the following license:  
MIT
