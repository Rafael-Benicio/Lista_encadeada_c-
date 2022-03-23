# Lista encadeada C++

Uma Exemplo simples e facilmente modificavel de uma lista encadeada

## Node

### Atributos

A classe possui dois atributos

- data
	- Tipo __int__
	- Privado
	- Valor a ser armazenado
- next
	- Tipo __ponteiro__ de __Node__
	- Privado
	- Próximo Node na Lista


### Métodos

- getData()
	- retorna um __int__
	- retorna o valor de __data__
- getNext()
	- retorna __ponteiro__ pada __Node__
	- retorna o valor de __next__
- setData(int val)
	- retorno __void__
	- configura o valor de __data__
- setNext(Node* n)
	- retorno __void__
	- configura o valor de __next__

### Construtor

A classe Node possui dois contrutores

- Node()
	- Não define o valor de __data__
	- define __next__ como __NULL__
- Node(int val)
	- define o valor de __data__ como = val
	- define __next__ como __NULL__

## List

### Atributos

- head
	- Tipo __ponteiro__ para __Node__
	- Privado
	- Primeiro elemento da Lista
- tail
	- Tipo __ponteiro__ para __Node__
	- Privado
	- Ultimo elemento da Lista
- size
	- Tipo __int__
	- numero de elementos da Lista
### Métodos

- show()
	- retorna __void__
	- Exibi o volor de todos os elementos da Lista
- empty()
	- retorna __void__
	- Diz se a lista está vazia
- insert(int val)
	- retorna __void__
	- insere um novo valor no inicio da lista
- push(int val)
	- retorna __void__
	- inserte valor no final da lista
- remove(int val)
	- retorna __bool__
	- Remove da lista o valor passado
- [int]
	- rotorna __int__
	- retorna o valor que está no index indicado


### Construtor

- List()
	- define __head__ como __NULL__
	- define __tail__ como __NULL__
	- define __size__ como __0__
- List(int val)
	- define __head__ como __Node__ com __data__ = v
	- define __tal__ como = __head__
	- define __size__ como __1__
	