/**
*   @author Nikita Somenkov
*   @email somenkov.nikita@icloud.com
*   @date   15 Jan 2017
*/

#include <Installer.hpp>


int main()
{
    Installer installer;
 
    for (int i = 0; i < 3; i++)
    {
        installer.install();
        installer.chooseLocation();
        installer.acceptLicence();    
    }
    
    return 0;
}