# Smoke test for localhost

echo ruok | nc 127.0.0.1 2181

# Smoke test for external ip

echo ruok | nc 192.168.56.210 2181

# !!! Need open port on ufw !!!

# if imok this ok, else server not work
