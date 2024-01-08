#pragma once

/** @file IO.hpp
 *  @brief A class for interpreting the user input
 *  @author Momchil Mladenov, 5MI0800232, Group 3
*/

/**
 * @class IO
*/

class IO{
    private:
        std::string input; //!< General storage for user input
        bool encoded;   //!< A bool that stores whether a file has been changed after being saved
        bool saved; //!< A bool that stores whether a file has recently been saved
        bool opened; //!< A bool that stores whether a file is currently open

        //! Checks if a file exist in folder text by a given name depending on type 
        bool fileExist(const std::string& fileName);

        //! Default constructor
        IO() = default;
    public:
        //! Singleton starter
        static IO& getInstance();

        //! Loop meant for addresing user input
        void menu();

        //! Prints all the functions a user can use
        void help();

        //! Loads text from a given file in text folder
        void inputting();
        //! Loads text in a given file in text folder
        void outputting();
        //! Displays the value of every byte in encoded text
        void debug();
        //! Encodes the text using Huffman's algorithm
        void encode();
        //! Decodes the text using Huffman's tree from the key file with the same name
        void decode();

};