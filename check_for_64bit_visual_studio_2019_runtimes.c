/*
    Copyright (C) 2017 Richard Stanway

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <windows.h>

int WINAPI _start (void)
{
	SetErrorMode (SEM_FAILCRITICALERRORS);
	if (!LoadLibraryW (L"VCRUNTIME140.DLL") || !LoadLibraryW (L"MSVCP140.DLL") || !LoadLibraryW (L"VCRUNTIME140_1.DLL"))
			ExitProcess(126);
	ExitProcess(0);
}
