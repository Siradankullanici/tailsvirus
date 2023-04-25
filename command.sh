apt-get install sudo
sudo su
sudo apt-get install dpkg
sudo apt-get install hdparm && y
sudo mkdir /mnt/mydrive
sudo mount -o loop,rw  /media/kali/Ventoy/kali-linux-2023.1-installer-amd64.iso /mnt/mydrive
sudo apt-get install -y gzip
sudo mkdir /mnt/sdd
sudo mkdir /mnt/sdc
sudo mkdir /mnt/sdb
sudo mount /dev/sdd /mnt/sdd
sudo mount /dev/sdc /mnt/sdc
sudo mount /dev/sdb /mnt/sdb
sudo apt-get update
sudo apt-get upgrade
sudo gunzip -c /media/root/Ventoy/tails-amd64-5.12.img
sudo dd if=/media/root/Ventoy/tails-amd64-5.12.img of=/dev/sdb bs=1M
sudo dd if=/home/root/Downloads/tails-amd64-5.12.img of=/dev/sdb bs=1M
sudo dd if=/media/root/Ventoy/tails-amd64-5.12.img of=/dev/sdd bs=1M
sudo mkdir /mnt/usb
sudo mount /dev/sdb1 /mnt/usb
sudo mkdir /mnt/tails
sudo mkdir /mnt/tails
sudo mkdir /mnt/tails0
sudo mount /dev/sdb1 /mnt/usb
sudo mkdir /mnt/usb
sudo mount /dev/sdb1 /mnt/usb
sudo mount /dev/sdd1 /mnt/usb
sudo mount /dev/sdd /mnt/usb
sudo mkdir /mnt/usb0
sudo mount /dev/sdd /mnt/usb0
sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails
sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails0
sudo losetup -a
sudo losetup /dev/loop0 /mnt/usb/tails-amd64-5.12.img
sudo mount /dev/loop0 /mnt/tails
sudo mount /dev/loop0 /mnt/tails
sudo mount -o loop -t ext4 /mnt/usb/tails-amd64-5.12.img /mnt/tails
sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails
sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails
sudo chmod -R 777 /snap/bare/5
sudo chmod -R 777 /snap/bare/5
sudo snap connect bare:removable-media
sudo cp freesweep.deb /snap/bare/5/
sudo snap connect bare:removable-media
sudo chmod -R 777 /media/root/TAILS
sudo chmod -R 777 /mnt/usb
sudo chmod -R 777 /mnt/TAILS0
sudo cp freesweep.deb /media/root/TAILS/syslinux
sudo rm -f /media/root/TAILS/syslinux/splash.png
sudo rm -f /mnt/usb/syslinux/splash.png
sudo cp splash.png /media/root/TAILS/syslinux
sudo cp splash.png /mnt/usb/syslinux/
sudo cp freesweep.deb /media/root/TAILS0/syslinux
sudo cp freesweep.deb /mnt/usb/EFI/debian/grub
sudo rm -f /mnt/usb/live/filesystem.squashfs
sudo rm -f /mnt/usb/EFI/debian/grub/splash.png
sudo cp splash.png /mnt/usb/EFI/debian/grub/splash.png
sudo cp filesystem.squashfs /mnt/usb/live
sudo cp filesystem.squashfs /media/root/TAILS/live
sudo rm /media/root/TAILS/EFI/debian/grub.cfg
sudo rm mnt/usb/EFI/debian/grub.cfg
sudo cp grub.cfg /mnt/usb/EFI/debian
sudo cp grub.cfg /media/root/TAILS/EFI/debian/grub.cfg
sudo cp freesweep.deb /media/root/TAILS/EFI/debian/
sudo cp freesweep.deb /mnt/usb/EFI/debian
