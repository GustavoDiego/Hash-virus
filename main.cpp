#include <iostream>
#include <fstream>
#include <string>
#include <vector>


static const unsigned int TABLE_SIZE = 10007;


struct HashEntry {
    std::string block;
    int count;
};


class HashTable {
private:
    std::vector<std::vector<HashEntry>> table;

    unsigned long hashString(const std::string &block) const {
        unsigned long h = 0;
        for (char c : block) {
            
            h = (h * 31 + c) % TABLE_SIZE;
        }
        return h;
    }

public:
    HashTable() {
        table.resize(TABLE_SIZE);
    }

   
    void insert(const std::string &block) {
        unsigned long index = hashString(block);
       
        for (auto &entry : table[index]) {
            if (entry.block == block) {
               
                entry.count++;
                return;
            }
        }
       
        HashEntry newEntry;
        newEntry.block = block;
        newEntry.count = 1;
        table[index].push_back(newEntry);
    }


    void writeOutput(const std::string &outputFile) {
        std::ofstream out(outputFile);
        if (!out.is_open()) {
            std::cerr << "Erro ao abrir arquivo de saída " << outputFile << std::endl;
            return;
        }
    
        for (unsigned int i = 0; i < TABLE_SIZE; i++) {
            for (auto &entry : table[i]) {
                out << entry.block << "\t" << entry.count << "\n";
            }
        }
        out.close();
    }
};

int main() {
    
    std::string inputFile = "zika.segment.txt";
    std::string outputFile = "saida_blocos_6bases_zika.txt";

    std::ifstream in(inputFile);
    if (!in.is_open()) {
        std::cerr << "Erro ao abrir arquivo " << inputFile << std::endl;
        return 1;
    }

    HashTable hashTable;
    std::string line;

    while (true) {
       
        if (!std::getline(in, line)) {
            
            break;
        }

        
        if (line.size() < 60) {
           
            continue;
        }

        for (int i = 0; i < 10; i++) {
            std::string block = line.substr(i * 6, 6);
      
            hashTable.insert(block);
        }
    }

    in.close();

   
    hashTable.writeOutput(outputFile);

    std::cout << "Processamento concluído. Resultado escrito em: " << outputFile << std::endl;
    return 0;
}
