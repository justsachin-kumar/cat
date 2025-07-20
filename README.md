# Cat Command Clone in C

This is a simple C program that mimics the basic functionality of the Unix/Linux `cat` command. It reads a file and prints its contents to the standard output.

## 📁 File Structure

- `cat.c` – Main C source file containing the code to read and print a file.

## 🔧 Compilation

To compile the program, use `gcc`:

```bash
gcc cat.c -o cat
```

## ▶️ Usage

Run the compiled program with a filename as an argument:

```bash
./cat <filename>
```

### Example

```bash
./cat sample.txt
```

## ⚠️ Error Handling

- If no filename is provided, the program prints a usage message.
- If the specified file doesn't exist or can't be opened, an error message is shown.

## ✅ Features

- Read file content character by character.
- Simple and beginner-friendly code.
- Works with any readable text file.

## ❌ Limitations

- Does not support multiple files.
- No support for flags (e.g., `-n`, `-E`) like the original `cat` command.

