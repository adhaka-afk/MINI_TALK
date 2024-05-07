# MINI_TALK


## Description:

Welcome to Minitalk, a simple client-server communication program implemented in C. This project demonstrates inter-process communication using UNIX signals, specifically SIGUSR1 and SIGUSR2.

## Project Structure

server: The server application, responsible for receiving messages from clients and printing them.

client: The client application, which sends messages to the server.

Makefile: Compiles the source files without relinking.

minitalk.h: Header file containing function prototypes and necessary includes.

## Compilation

To compile the project, simply run 'make':

```bash
make
```
## Usage 
. Start the server first:

```bash
./server
```
The server will print its PID.



. Run the client with two arguments: the server's PID and the message to send:

```bash
./client [server_PID] [message]
```

## 🚀 Next Project

[fract-ol](https://github.com/adhaka-afk/FRACT-OL)

## ⏳ Previous Project

[get_next_line](https://github.com/adhaka-afk/GET_NEXT_LINE)
