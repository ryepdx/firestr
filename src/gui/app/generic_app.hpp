/*
 * Copyright (C) 2014  Maxim Noah Khailo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give 
 * permission to link the code of portions of this program with the 
 * Botan library under certain conditions as described in each 
 * individual source file, and distribute linked combinations 
 * including the two.
 *
 * You must obey the GNU General Public License in all respects for 
 * all of the code used other than Botan. If you modify file(s) with 
 * this exception, you may extend this exception to your version of the 
 * file(s), but you are not obligated to do so. If you do not wish to do 
 * so, delete this exception statement from your version. If you delete 
 * this exception statement from all source files in the program, then 
 * also delete it here.
 */

#ifndef FIRESTR_GUI_APP_GENERIC_APP_H
#define FIRESTR_GUI_APP_GENERIC_APP_H

#include "gui/message.hpp"

#include <QPushButton>
#include <QLabel>

namespace fire
{
    namespace gui
    {
        namespace app
        {
            class generic_app : public message
            {
                Q_OBJECT
                public:
                    generic_app();

                protected:
                    void set_title(const std::string&);
                    void set_main(QWidget*);
                    void alerted();

                private slots:
                    void toggle_visible();

                private:
                    QWidget* _main = nullptr;
                    QPushButton* _show_hide = nullptr;
                    QLabel* _title = nullptr;
                    std::string _title_text;
                    bool _visible = true;
                    size_t _min_height = 0;
                    size_t _max_height = 0;
            };
        }
    }
}

#endif

