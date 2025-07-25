
**Mists of Pandaria 5.4.8 Build 18414**

Discord link: https://discord.gg/y3zspxan7k

Client exe files" https://drive.google.com/file/d/1OCrtyvRXSvxnR9EoHWYfc-2Tbm5hX3ca

Compiled exe files: https://drive.google.com/file/d/1UxdZ51hR-nqC3HAvE8_0GkP_JnFiexrE

Geodata (RU dbc): https://drive.google.com/file/d/103QiAyR5lJsfFPaEAkWqWV2HkqrV8PzN

Pandaria 5.4.8 docker [(Thanks diff3)](https://github.com/diff3): https://github.com/diff3/pandaria_5.4.8_docker

## Requirements
+ Platform: Linux, Windows or Mac
+ Processor with SSE2 support
+ ACE = 7.0.0 (included for Windows) 
+ MySQL = 8.x.x - 8.4 LTS
+ CMake ≥ 3.14 (latest stable recommended) 
+ OpenSSL = 3.x.x - 3.5.x
+ Boost ≥ 1.78 (latest stable recommended)
+ Windows SDK version 10
+ MS Visual Studio 2022
+ ### Linux
+ GCC ≥ 9 (Linux only)
+ Clang ≥ 11 (Linux only)
+ #### Build :
+ ```bash
    $ git clone https://github.com/alexkulya/pandaria_5.4.8.git
    $ cd pandaria_5.4.8 mkdir build && cd build
+ command cmake (replace XX by your clang version) :
+ ```bash
  $ cmake ../ -DCMAKE_INSTALL_PREFIX=$HOME/yourUser/folder -DCMAKE_C_COMPILER=/usr/bin/clang-XX -DCMAKE_CXX_COMPILER=/usr/bin/clang++-XX -DSCRIPTS=static
  
  $ make -j $(nproc)
  $ make install
  (if permission denied, use sudo make install)
  ```
- if you want to build the tools to extracting data from MoP client, you need to add a compiler flag to cmake.

  ```bash
  cmake ../ -DCMAKE_INSTALL_PREFIX=$HOME/yourUser/folder -DCMAKE_C_COMPILER=/usr/bin/clang-XX -DCMAKE_CXX_COMPILER=/usr/bin/clang++-XX -DCMAKE_CXX_FLAGS=-pthread -DSCRIPTS=static
  ```

  

### Enjoy

## Copyright
License: GPL 2.0

Read file [COPYING](COPYING.md)

## Authors &amp; Contributors
Read file [THANKS](THANKS.md)
