# Phasuk

**Phasuk** is derived from the Hebrew word for "verse." This tool brings the Bible directly to your command line.
  
  The goal is for these verses to be more than just random text, but a word  of encouragement for you at the right time. It includes a feature to  display the words of Jesus Christ specifically (the "Red Letter" verses).

## Features

- Display random verses from the entire New Testament
- Display random verses spoken by Jesus Christ (red text)
- Simple command-line interface

## Installation

### Debian or Ubuntu-based Distros

### Snap

```
sudo snap install phasuk
```
[![Get it from the Snap Store](https://snapcraft.io/en/dark/install.svg)](https://snapcraft.io/phasuk)

<hr style="height: 3px; background-color: #858181ff;">


### Building from Source

1. Clone the repository:
```sh
git clone https://github.com/adesolasamuel/phasuk.git
cd phasuk
```

2. Create a build directory and compile:
```sh
mkdir build
cd build
cmake ..
make
```

3. (Optional) Install system-wide:
```sh
sudo make install
```
<hr style="height: 3px; background-color: #858181ff;">

## CLI Usage

### Basic Commands

- **Get a random verse from the New Testament:**
```sh
phasuk
```

- **Get a random word from Jesus Christ:**
```sh
phasuk Jesus
```

- **Display help information:**
```sh
phasuk help
```

### Examples

```sh
$ phasuk
Matthew 7:7	Ask, and it shall be given you; seek, and ye shall find; knock, and it shall be opened unto you:

$ phasuk Jesus
John 14:6	Jesus saith unto him, I am the way, the truth, and the life: no man cometh unto the Father, but by me.
```

## Project Structure

```
phasuk/
├── Bible/
│   ├── BibleNewTestament.txt          # Complete New Testament text
│   └── BibleNewTestamentRedText.txt   # Words of Jesus Christ only
├── includes/
│   └── BibleVerse.h                   # BibleVerse class header
├── src/
│   ├── main.cpp                       # Main application logic
│   └── BibleVerse.cpp                 # BibleVerse class implementation
├── CMakeLists.txt                     # CMake build configuration
└── README.md
```

## How It Works

The application uses the `BibleVerse` class to:
1. Open the appropriate Bible text file (BibleNewTestament.txt or BibleNewTestamentRedText.txt)
2. Generate a random line number
3. Navigate to that line
4. Display the verse to the user

The red text file contains 2,034 verses spoken by Jesus, while the complete New Testament contains 7,957 verses.

## Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

### Contribution Ideas

- Add support for Old Testament verses
- Include verse references and context
- Add search functionality for specific topics or keywords
- Implement verse bookmarking or favorites
- Add different Bible translations
- Create a GUI version
- Add internationalization support

## File Formats

The Bible text files use a simple format:
```
Book Chapter:Verse	Verse text...
```

Example:
```
John 3:16	For God so loved the world, that he gave his only begotten Son...
```

## License

This project is open source. Please ensure compliance with copyright laws regarding Bible text distribution.


## Building on Different Platforms

### Linux
```sh
mkdir build && cd build
cmake ..
make
```

### macOS
```sh
mkdir build && cd build
cmake ..
make
```

### Windows
```sh
mkdir build
cd build
cmake ..
cmake --build .
```

## Troubleshooting

**"Could not read Bible Verses" error:**
- Ensure the `Bible` directory is in the same location as the executable
- Check that the Bible text files exist and are readable

**Random verses not appearing random:**
- The application uses time-based seeding; running multiple times per second may yield similar results

## Contact

For questions, issues, or suggestions, please open an issue on the project repository.

---

*"Thy word is a lamp unto my feet, and a light unto my path." - Psalm 119:105*
