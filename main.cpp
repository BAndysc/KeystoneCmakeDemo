#include <iostream>
#include "keystone/keystone.h"

int main()
{
    std::cout << "KS_ERR_ASM = " << KS_ERR_ASM << std::endl;
    std::cout << ks_arch_supported(KS_ARCH_ARM) << std::endl;
    return 0;
}