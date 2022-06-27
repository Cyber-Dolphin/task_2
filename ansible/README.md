ANSIBLE:

Созданы 2 роли: 

"zookeeper-build" содержит задачи на установку зависимостей, сборку deb пакета.

"zookeper-install" содержит задачи для установки deb пакета, установки прав доступа на дериктории, запуск сервиса zookeeper.

---

Команда для отдельного запуска:

ansible-playbook -i inventory playbook.yml


