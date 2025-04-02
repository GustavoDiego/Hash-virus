# 🧬 Análise de Blocos de 6 Bases em um Genoma

Este projeto lê um arquivo de sequências de DNA (A, T, C, G), divide cada linha em blocos de 6 bases e conta quantas vezes cada bloco aparece ao longo do arquivo. É especialmente útil para identificar repetições e padrões em trechos genômicos, com aplicação em pesquisas de Biologia Molecular Computacional.

---

## 🚀 Introdução

O sistema processa cada linha, extrai 10 blocos de 6 bases e armazena esses blocos em uma **Hash Table** usando encadeamento externo. Isso permite contabilizar rapidamente quantas vezes cada bloco aparece em todo o arquivo de entrada.

## 🔎 Características Principais

O projeto funciona extraindo blocos de 6 bases , armazenando-os em uma estrutura de **Hash Table**. Cada ocorrência de um bloco incrementa o contador associado a esse bloco. Ao final, um arquivo de saída exibe cada bloco e o número total de ocorrências.

---

## ✅ Pré-Requisitos

É necessário ter um compilador C++ instalado (por exemplo, GCC, G++ ou Clang). O arquivo de entrada (ex.: `genoma.txt`) deve conter preferencialmente linhas de 60 caracteres, podendo a última ser menor.

---

## ⚙ Instalação e Execução

Para compilar, basta abrir um terminal no diretório onde está o arquivo `main.cpp` e executar:

```
g++ -o main main.cpp
```

Isso criará um executável chamado `main` (ou `main.exe` em Windows). Coloque o arquivo de entrada na mesma pasta ou ajuste o caminho no seu código. Em seguida, execute o programa:

```
./main
```

Se tudo correr bem, um arquivo de saída (por padrão, `saida_blocos_6bases.txt`) será gerado com os blocos e suas contagens.

---

## 📝 Exemplo de Arquivo de Teste

Um exemplo simples com cada linha tendo:

```
AAATTTAAATTTAAATTTAAATTTAAATTTAAATTTAAATTTAAATTTAAATTTAAATTT
CCCCCCAAAAGGGGTTTTTCCCCCCAAAAGGGGTTTTTCCCCCCAAAAGGGGTTTTTCCC
GGGGGGAAAAAATTTTTTCCCCCCGGGGGGAAAAAATTTTTTCCCCCCGGGGGGAAAAAA
```


---

## 🗂 Estrutura do Projeto

O repositório contém:

- **main.cpp**: Lógica de leitura, contagem em Hash Table e gravação dos resultados.
- **genoma.txt** (exemplo): Arquivo de entrada.
- **saida_blocos_6bases.txt**: Arquivo de saída gerado, relacionando cada bloco à respectiva frequência.

---

## ⚠ Possíveis Problemas

Se o programa não encontrar o arquivo de entrada, confirme se ele está no mesmo diretório ou atualize o caminho no código. Se o arquivo de saída ficar vazio, verifique se de fato há linhas de 60 caracteres. Caso apareçam caracteres estranhos no console (problemas de acentuação), isso não interfere na execução, sendo apenas questão de codificação do terminal.

---

## 🔮 Futuras Melhorias

O código atual pode ser estendido para:

- Otimizar a **função de hash** ou usar hashing duplo.
- Implementar **funções estatísticas** para relatórios de distribuição de bases.
- Tratar caracteres fora de `A, T, C, G` (por exemplo, `N` para bases desconhecidas).

---

## 📄 Licença (MIT)

Este software está disponível sob a [Licença MIT](https://opensource.org/licenses/MIT).

```
MIT License

Copyright (c) 2025 [Gustavo Diego Da Silva]


```

---

## 💬 Contato e Contribuições

Dúvidas e sugestões podem ser enviadas por e-mail para [gustavodiego298@gmail.com](mailto:gustavodiego298@gmail.com). Caso queira contribuir, abra **issues** ou envie **pull requests** no repositório. Agradecemos seu interesse em melhorar este projeto!
