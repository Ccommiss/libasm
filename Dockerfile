FROM ubuntu:latest
RUN	apt-get update
RUN apt-get install -y nasm binutils vim curl zsh git make
#RUN curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh
RUN mkdir ./ASM
COPY * ./ASM/
CMD sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
