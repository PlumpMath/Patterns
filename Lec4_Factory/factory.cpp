/**
*   @author Nikita Somenkov
*   @email  somenkov.nikita@icloud.com
*   @date   31 Dec 2016
*/

#include <GUIFactory.hpp>
#include <MacGUIFactory.hpp>
#include <WinGUIFactory.hpp>

int main()
{
    std::shared_ptr<GUIFactory> macGUIFactory = std::make_shared<MacGUIFactory>();
    std::shared_ptr<GUIFactory> winGUIFactory = std::make_shared<WinGUIFactory>();

    auto window = macGUIFactory->createWindow();
    auto chbox = macGUIFactory->createCheckBox();
    auto button = macGUIFactory->createButton();

    chbox->setState(true);
    button->press();
    window->show();

    window = winGUIFactory->createWindow();
    chbox = winGUIFactory->createCheckBox();
    button = winGUIFactory->createButton();

    chbox->setState(false);
    button->press();
    window->show();

    return 0;
}