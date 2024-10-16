/*
This file is part of FAgram Desktop,
the unofficial desktop client based on Telegram Desktop.

For license and copyright information please follow this link:
https://github.com/fajox1/fagramdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/weak_ptr.h"

namespace Main {
class Session;
} // namespace Main

namespace Ui::Toast {
class Instance;
} // namespace Ui::Toast

namespace HistoryView {

class InfoTooltip final {
public:
	InfoTooltip();

	void show(
		not_null<QWidget*> parent,
		not_null<Main::Session*> session,
		const TextWithEntities &text,
		Fn<void()> hiddenCallback);
	void hide(anim::type animated);

private:
	base::weak_ptr<Ui::Toast::Instance> _topToast;

};

} // namespace HistoryView
