#!/bin/bash
#Работа с файлами
mkdir test
cd test
#Создали директорию и перешли в нее
touch test_one
touch test_two
touch test_three
#Создаем несколько тестовых файлов

echo "Эту лабораторную работу создал $(whoami)" >> test_one
#Запишем в первый файл строку с командой whoami
var1="24-09-2023"
echo "$var1 - начало работы" >> test_two
#Во второй запишем строку с переменной var1
echo "$(date +%d-%m-%Y) - дата сдачи этой работы" >> test_three
#В третий запишем дату сдачи этой работы)))

cat test_one test_two test_three >> message_file
#Объединим все 3 файла в один при помощи команды cat
cat message_file
#Выведем получившееся

#Давайте сделаем что-нибудь прикольное.
#Например вычислим  n-ый ряд числа Фибоначчи

read -p "Введите номер ряда числа Фибоначчи: " n 
#Примем число n от пользователя

fibvar1=0
fibvar2=1

for ((i=0; i<n; i++))
#Перебор чисел через цикл for
do
    fibsum=$(($fibvar1+$fibvar2))
    #Следующее число в ряде
    fibvar1=$fibvar2
    fibvar2=$fibsum
    #Присваиваем числу предыдущего ряда значение настоящего
    #А числу настоящего ряда значение следующего
done

echo "Это число: $fibsum"
#Выводим результат на экран
