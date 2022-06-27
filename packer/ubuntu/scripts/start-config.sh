#!/bin/bash -eux

# Install dependencies.

apt -y update 

#&& sudo apt -y upgrade

apt -y install python3-pip python-dev apt-transport-https \
    ca-certificates \
    curl \
    gnupg2 \
    software-properties-common \
    fail2ban \
    ufw \
    python-setuptools \
    libcppunit-dev \
    build-essential \
    libboost-all-dev \
    cmake \
    flex \
    libtool \
    ant

# Add SSH key

mkdir /home/autodoria/.ssh

chmod 700 /home/autodoria/.ssh

echo "ssh-rsa AAAAB3NzaC1yc2EAAAABJQAAAQEAihszCDwPZ51513OgSpPzAAL/Cw2XrH2Kmto0eNQ7kItMozBRtL5Nv2BEsE+kycgoQZzoi4hdIc1p8CZp4tRoniVt5Mmah6xamDPNvHvVGKutWCE53IqhfdWH8zQPq+Xsleczc2ae3bhg3ZzPQ52e7hK4oXgSTlGKw8ryjS+zkKOUhKkktfR+3L/v/0cOQQYhP4FNr3Y2zFQU3anfXU2dxkafWAr6Q1KTaJDnm1dGdnvGxx0xqoLT2IVBnqTjzJ+I4PJENYZQzR/QTvm9Lz73MHG96hWo848T+IpjLe3K49toqauLdXbSXGtwr3TXRUHCjYhlxauV6MwHoBH44LJxTQ== autodoria" | tee /home/autodoria/.ssh/authorized_keys

chown -R autodoria:autodoria /home/autodoria/.ssh

chmod 600 /home/autodoria/.ssh/authorized_keys

# Add autodoria no passwd SUDO

echo "autodoria ALL=(ALL) NOPASSWD:ALL" | tee -a /etc/sudoers

# Settings SSH

echo "PasswordAuthentication no" | tee -a /etc/ssh/sshd_config

service ssh restart

service sshd restart

# Setings FW

ufw allow OpenSSH

echo "y" | ufw enable

# Change password for autodoria

printf 'autodoria:$6$c0qOW7LuxaJr8qsB$kXYJybBY91J6T0y19.FUs6erAFxbNtW4cLN.amS9ZLf8LSG1wicC5N5SOdjlsWmw3mdQyZA6beSLiF2cDHEeb1' | chpasswd --encrypted
