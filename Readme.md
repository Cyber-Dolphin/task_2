Сформировать установочный пакет (deb) для сервиса zookeeper (https://zookeeper.apache.org/) в виде одного инстанса под Ubuntu 20* 

Организовать сборку и установку пакета на виртуальной машине поднятой средствами Vagrant. Процессы сборки и поставки (установка, настройка) собранного пакета на созданных виртуальных машинах должны быть реализованы с помощью Ansible.

Пакет должен включать в себя:

- сервис должен быть добавлен в автозагрузку системы
- после установки из пакета сервис zookeeper должен запуститься

На странице проекта данного пакета должен быть выложен список команд для сборки пакета и проверки работы (smoke test) сервиса zookeeper после установки сервиса из данного пакета.

Все исходники управления конфигурациями и сборки пакеты выложить на github.