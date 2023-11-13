# Отчет по курсовой работе №2 по курсу "Фундаментальная информатика"
- Студент группы: M8О-115Б-23, Черников Алексей Всеволодович\ Контакты: alexey0chernikov@yandex.ru \ Работа выполнена: 05.11.2023\ Преподаватель: Чеснов Илья Игоревич
## 1. Тема
- Программирование машин Тьюринга при помощи диаграммера.
## 2. Цель работы
- Составить программу машины Тьюринга используя диаграммер, выполняющую заданное действие над словами, записанными на ленте.
## 3. Задание
- Вычисление предиката x<у для двух чисел в алфавите {0,1,2,3,4,5,6,7,8,9}.
## 4. Оборудование
-   Процессор: AMD Ryzen 7 5800h with radeon graphics
-   ОП: 16ГБ
-   НМД: 512ГБ
-   Монитор: 1920x1080
## 5.Программное обеспечение
-   Операционная система семейства: linux(ubuntu), версия 22.04.03
-   Интерпретатор команд: bash, версия 5.1.16(1)
-   Диаграммер Тьюринга VTM
## 6.Идея, метод, алгоритм решения задачи
1. Сделаем две стадии проверки - проверку по количеству разрядов и проверку по цифрам.
2. Раскопируем вводные данный и будем проводить операции над копией, чтобы вывод оставался нормированным.
## 7.Сценарий выполнения работы
1. Копируем вводные данные
2. Проверяем длину чисел по разрядам
4. В случае, когда x < y(по разрядам) удаляем все копии и пишем справа 1, иначе пишем 0.
5. В случае, когда кол-во разрядов равно переходи к поочередному сравнению цифр чисел
6. В случае, когда x < y(по цифрам) удаляем все копии и пишем справа 1, иначе пишем 0.
## 8.Распечатка протокола
1. 23 5
 23 5 23
 23 5 23 5
 23 5   3 5
 23 5   3
 23 5   0
2. Смотреть папку screenshots
## 9.Дневник отладки
Место| Дата | Время | Событие | Действие по исправлению | Примечание
------- | ------- | --------- | ------- | -----------| ------
Дом   |   05.11.23   |   13:50    | Начало работы | - | -
Дом   | 05.11.23     |   14:13    | Обычное копирование не работает, как надо | Создаем собственные подмашины копирования | -
Дом   | 05.11.23     |   15:29    | При сравнении и постепенном удалении разрядов пропадает пробел между копиями вводных данных|Будем удалять разносторонние разряды, чтобы оставить центральный пробел| -
Дом |05.11.23| 18:17| Конец работы| - |- 

## 10.Замечания автора по существу работы
- Крайне увлекательная работа
## 11.Выводы
- Это был мой первый самостоятельный диграммер Тьюринга