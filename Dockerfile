FROM ubuntu

# 安装依赖工具
RUN apt-get update && apt-get install -y \
    git build-essential wget curl \
    qemu-system-misc \
    gcc-riscv64-unknown-elf \
    binutils-riscv64-unknown-elf \
    gdb-multiarch \
    make

WORKDIR /os

# 把代码拷贝进容器
COPY ./include ./include
COPY ./src ./src
COPY ./Makefile ./Makefile
COPY ./os.ld ./os.ld

# 默认目标：编译 + 运行
CMD ["make", "run"]
