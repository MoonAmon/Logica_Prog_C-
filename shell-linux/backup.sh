#!/bin/bash

# Backup script

backup_dir=/var/backups
backup_file=$backup_dir/etc_$(date +%Y%m%d).tar.gz

echo "Creating backup file: $backup_file etc.tar.gz"

tar -czf $backup_file /home/thiago/Desktop /home/thiago/Documents /home/thiago/Downloads | pv -s $(du -sb /home/thiago/Desktop /home/thiago/Documents /home/thiago/Downloads | awk '{print $1}') > /dev/null

echo "Backup finished"