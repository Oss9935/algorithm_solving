# Data Structrue

## Table of Contents

1. <a href="#ds-1">Array</a>

2. <a href="#ds-2">Linked List</a>

3. <a href="#ds-3">Stack</a>

4. <a href="#ds-4">Queue</a>

5. <a href="#ds-5">Tree</a>

6. <a href="#ds-6">Binary Heap</a>

7. <a href="#ds-7">Red Black Tree</a>

8. <a href="#ds-8">Hash Table</a>

9. <a href="#ds-9">Graph</a>

---

<h2 id="ds-1">1️⃣  Array</h2>

### 1. Python

* [1차원 배열의 주요 메서드와 특징: List](./array/python/one_dimensional_array.md)

* [다차원(2차원 이상) 배열의 생성 및 사용: List](./array/python/multi_dimensional_array.md)

* [[외부 링크] Python, Memory, and Objects](https://towardsdatascience.com/python-memory-and-objects-e7bec4a2845): mutable object, immutable object, interning 개념 설명 잘되어있음.

* [[외부 링크] assignment("=") vs shallow copy vs deep copy](https://medium.com/@thawsitt/assignment-vs-shallow-copy-vs-deep-copy-in-python-f70c2f0ebd86)

* [배열 내 데이터의 탐색: 순차탐색](./array/python/sequential_search.md)

* [배열 내 데이터의 탐색: 이진탐색](./../../dongbin_book/chap7_binary_search/README.md)

<br/>

---
<h2 id="ds-2">2️⃣  Linked List</h2>

<br/>

---
<h2 id="ds-3">3️⃣  Stack</h2>

### 0. Overview

> Last in First Out(LIFO) 구조의 자료형. 원소 삽입 삭제의 시간복잡도가 <img src="https://chart.apis.google.com/chart?cht=tx&chl=O(1)" />으로 매우 빠름. 하지만 이론상 스택의 top을 제외한 나머지 스택 내 데이터의 탐색 시 원소를 하나씩 꺼내어 옮겨 담으면서 수행해야하는 단점이 있음.

<br/>

:bulb:&ensp; 언제 사용할까?

> 재귀 알고리즘이나 백트래킹이 필요한 작업에서 활용하기 좋음.

<br/>

:bulb:&ensp; 스택 자료형을 사용하는 대표적인 문제

* 괄호 검사

* 역순 문자열 만들기

* 후위 표기법으로의 변환

<br/>

### 1. 구현

#### :pushpin:&ensp; Python 구현

* [List를 활용한 구현](./stack/python/stack_list.md)

* [deque 모듈 사용](./stack/python/stack_deque.md)

<br/>

---
<h2 id="ds-4">4️⃣  Queue</h2>

> First in First Out(FIFO) 구조의 자료형. 원소 삽입 삭제의 시간복잡도가 <img src="https://chart.apis.google.com/chart?cht=tx&chl=O(1)" />으로 매우 빠름.

<br/>

:bulb:&ensp; 언제 사용할까?
* 데이터를 입력된 순서대로 처리하는 경우

* BFS 구현 시

<br/>

:bulb:&ensp; 큐 자료형을 사용하는 대표적인 문제

* BFS 문제

* 콜센터 대기 순서

* 프로세스 관리

<br/>

### 1. 구현

#### :pushpin:&ensp; Python 구현

* [List를 활용한 구현](./queue/python/queue_list.md)

* [deque 모듈 사용](./queue/python/queue_deque.md)

* 선형 큐 구현

* 순환 큐 구현

<br/>

---
<h2 id="ds-5">5️⃣  Tree</h2>

<br/>

---
<h2 id="ds-6">6️⃣  Binary Heap</h2>

<br/>

---
<h2 id="ds-7">7️⃣  Red Black Tree</h2>

<br/>

---
<h2 id="ds-8">8️⃣  Hash Table</h2>

<br/>

---
<h2 id="ds-9">9️⃣  Graph</h2>

### 1. Python 

* [인접행렬 구현](./graph/python/adjacent_matrix.md)

* [인접 리스트 구현](./graph/python/adjacent_list.md)

* [간선리스트 구현](./graph/python/edge_list.md)

* Edge Cases


