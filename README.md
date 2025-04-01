# Push Swap

## Introduction

**Push Swap** is an algorithmic problem that involves sorting a stack of integers with a limited set of operations using two stacks (`A` and `B`). The goal is to achieve a sorted stack `A` in the fewest possible moves.

---

## Problem Statement

Given an unsorted stack `A` containing `N` unique integers, and an empty stack `B`, you may use the following operations:

## Operations Allowed

| Operation | Description                                      |
|-----------|--------------------------------------------------|
| **sa**    | Swap the first two elements of stack `A`.       |
| **sb**    | Swap the first two elements of stack `B`.       |
| **ss**    | Perform `sa` and `sb` simultaneously.           |
| **pa**    | Move the top element of `B` to stack `A`.       |
| **pb**    | Move the top element of `A` to stack `B`.       |
| **ra**    | Shift all elements of stack `A` up by one.      |
| **rb**    | Shift all elements of stack `B` up by one.      |
| **rr**    | Perform `ra` and `rb` simultaneously.           |
| **rra**   | Shift all elements of stack `A` down by one.    |
| **rrb**   | Shift all elements of stack `B` down by one.    |
| **rrr**   | Perform `rra` and `rrb` simultaneously.         |


The challenge is to sort `A` using the minimal number of these operations.

## Sorting with Minimal Operations

To successfully pass the subject, the program must sort the stack using no more than the following number of operations:

- **3 numbers**: At most **3 operations**.
- **5 numbers**: At most **12 operations**.
- **100 numbers**: At most **770 operations**.
- **500 numbers**: At most **5500 operations**.

Make sure to design your solution to stay within these operation limits for different input sizes.
