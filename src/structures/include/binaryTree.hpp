#pragma once

#include <cstddef>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

typedef std::pair<char,std::size_t> myPair;

class binaryTree{
    private:
        binaryTree* left;
        binaryTree* right;
        std::size_t occurrence;
        char letter;

        void dealocate();
        binaryTree* createFromString(const std::string&);
    
    public:
        binaryTree(char letter = '\0', std::size_t occurrence = 0, binaryTree* left = nullptr, binaryTree* right = nullptr):
            letter(letter), occurrence(occurrence), left(left), right(right)
        {};
        binaryTree(const std::string&){};

        ~binaryTree();

        char getChar() const;
        std::size_t getOccurrence() const;
        bool noChildren() const;

        binaryTree* getLeft();
        binaryTree* getRight();
        
        std::string toString() const;
};