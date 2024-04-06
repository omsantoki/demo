# Sleep Inducer Program

This program manages sleep data of inmates and provides functionalities such as inserting new data, searching for inmates, deleting inmates, setting auto dorm, and starting sleep inducer.

## Dependencies
- C++ Standard Library
- Windows API

## Usage

### Functions

#### `ifexist(string ID)`
- Checks if an inmate with a given ID exists in the file.

#### `insert(Inmates i)`
- Inserts new inmate data into the file.

#### `search()`
- Searches for an inmate by ID in the file.

#### `show()`
- Displays all inmates' data from the file.

#### `delete_inmate()`
- Deletes an inmate by ID from the file.

#### `set_dorm()`
- Sets auto dorm based on sleep time of a specified day.

#### `inducer()`
- Starts sleep inducer based on current time.

#### `main()`
- Controls the flow of the program.

#### `start()`
- Entry point of the program.

## How to Run

1. Ensure you have a C++ compiler installed on your system.
2. Compile the source code.
3. Run the executable file generated.

## Contribution

Contributions are welcome! If you find any bugs or want to add new features, feel free to submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
