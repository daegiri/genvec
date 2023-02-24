# genvec

A single-header C library that provides a generic vector. To use it, just copy and paste the `vector.h` file into your project.

## Memory representation

```
            returned pointer ----+
                                 |
                                 v
+------+----------+--------------+---+---+---+-----+---+
| size | capacity | element_size | 1 | 2 | 3 | ... | n |
+------+----------+--------------+---+---+---+-----+---+
```
