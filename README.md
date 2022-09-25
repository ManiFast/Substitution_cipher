# Substitution_cipher
Like Caesar cipher

![](https://github.com/ManiFast/Substitution_cipher/blob/main/Screenshot%20(473).png)

### C. Шифр замены / Task C. Substitution cipher</br>
Шифр замены ставит в соответствие каждому символу алфавита c некоторый </br>
символ алфавита f(c). Шифр замены можно применить к строке несколько раз.</br>
По заданной исходной строке и зашифрованной строке определите, сколько раз </br>
был применен шифр замены.</br></br>
/
The substitution cipher assigns to each letter of the Latin alphabet a symbol of the f(c) </br>
alphabet. This cipher could be applied to a line several times. Given the initial line and </br>
the encrypted line, determine how many times the substitution cipher has been applied.</br></br>
### Входные данные / Input format</br>
В первой строке записаны 26 символов. k-й символ этой строки показывает, какой </br>
символ соответствует k-му по счету символу латинского алфавита.</br>
Во второй строке дано число n (1≤n≤1000000) — длина исходной и </br>
зашифрованной строки.</br>
В каждой из следующих двух строк записана строка длиной n, состоящая из </br>
строчных латинских символов.</br>
Символы латинского алфавита нумеруются с единицы, начиная с символа a и </br>
заканчивая символом z.</br></br>
/
The first line contains 26 symbols. The k-th symbol shows which letter corresponds to </br>
the k-th letter of the Latin alphabet.</br>
The second line contains number n (1≤n≤1000000), which is the length of the initial </br>
and encrypted lines.</br>
The next two lines have the length n. These lines consist of lowercase letters of the </br>
Latin alphabet.</br>
Each letter of the Latin alphabet has their own number (a = 1 and z = 26).</br></br>
### Выходные данные / Output format
В единственной строке выходного файла выведите необходимое количество</br>
операций замены символов. / Output the necessary number of symbol substitution</br>
operations in the output file’s only line.</br>
Если ответа не существует, выведите -1. / If the answer doesn’t exist, output -1.</br></br>
### Система оценки / Evaluation criteria</br>
Решения, верно работающие при n≤1000 будут получать не менее 60 баллов. /</br>
Solutions working appropriately only if n≤1000 will get at least 60 points.</br></br>
#### Пример / Example</br>
входные данные / Standard input</br>
`bcdefghijklmnopqrstuvwwwww`</br>
`7`</br>
`abacaba`</br>
`cdcecdc`</br></br>
#### выходные данные / Standard output</br>
`2`</br></br>
### Примечание / Note</br>
В тесте из примера первая строка будет меняться следующим образом: / Here is</br>
how the first line from the example is going to change:</br></br>
После первой замены всех символов строка abacaba превратится в</br>
строку bcbdbcb (символ a заменяется на b, b — на c, c — на d) / After</br>
the first substitution, the abacaba line is replaced by bcbdbcb; that is, a</br>
is replaced by b, b by c, and c by d;</br></br>
После второй замены всех символов уже новая</br>
строка bcbdbcb превратится в cdcecdc (символ b заменяется</br>
на c, c — на d, d — на e) / After the second substitution, the new</br>
bcbdbcb line will be replaced by cdcecdc; that is, b is replaced by c, c</br>
by d, and d by e;</br></br>
То есть после двух замен всех символов мы получили вторую строку, </br>
значит ответ равен 2 / After two substitutions, we get line 2, so the</br>
answer is 2</br>
