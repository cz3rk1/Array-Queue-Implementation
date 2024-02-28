# Queue Implementation in C++

This repository contains an implementation of a simple queue data structure in C++. The queue is implemented using an array with a fixed size.

## Description

The `queue` class implements the basic operations of a queue data structure, including enqueue, dequeue, and checking whether the queue is empty. It uses an array `T` of integers to store the elements of the queue, with a fixed size `N`. The queue follows the first-in-first-out (FIFO) principle.

## Class Members

### `queue()`

Constructor for the `queue` class. Initializes the queue with an empty state.

### `~queue()`

Destructor for the `queue` class. No dynamic memory allocation is used, so the destructor is empty.

### `empty()`

Checks if the queue is empty.

### `front()`

Returns the front element of the queue without removing it.

### `enqueue(int v)`

Adds an element to the back of the queue.

### `dequeue()`

Removes the front element from the queue.

### `print()`

Prints the elements of the queue.

## Usage

The `main()` function demonstrates the usage of the `queue` class. It initializes a queue, enqueues random integers, dequeues elements, and prints the queue after each operation.

## About the Code

The code utilizes the C++ Standard Library for input/output operations (`iostream`), random number generation (`ctime`, `cstdlib`), and dynamic memory allocation (`new`, `delete`). The queue is implemented using an array-based approach.

Feel free to use and modify the code according to your requirements.
