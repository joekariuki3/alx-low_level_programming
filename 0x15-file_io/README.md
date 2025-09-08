# 0x15. C - File I/O

Use POSIX system calls to read and write files.

## Learning Objectives
- Open, read, write, close with file descriptors
- Use correct permissions and flags
- Handle partial reads/writes and errors safely

## Notes
- Prefer `read`/`write` loops until all bytes processed
- Always check return values and `errno`
