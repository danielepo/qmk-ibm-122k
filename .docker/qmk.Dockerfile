FROM ubuntu:disco

RUN apt-get update
RUN apt install git -y  --fix-missing
RUN git --version

RUN git clone https://github.com/qmk/qmk_firmware

WORKDIR /qmk_firmware
RUN apt install build-essential gcc-avr -y
RUN apt install sudo wget gcc -y
RUN make git-submodule

RUN ./util/qmk_install.sh

RUN mkdir teensyloader && cd teensyloader && mkdir Windows && cd Windows && wget https://www.pjrc.com/teensy/teensy.exe
