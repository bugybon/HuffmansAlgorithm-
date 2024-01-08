#pragma once

#include "../../structures/include/binaryTree.hpp"


binaryTree* pickTree(std::queue<binaryTree*>& first, std::queue<binaryTree*>& second);
binaryTree* createHuffmanTree(std::vector<myPair> occurrenceTable);
void printHuffmanTree(binaryTree*, std::size_t, std::size_t, std::vector<std::pair<std::string, bool>>&);
std::string leafToBinary(std::size_t, std::size_t);
std::string byteToNumber(std::string);
std::string decodeHuffman(binaryTree*, std::string);