/*
This file is part of FAgram Desktop,
the unofficial desktop client based on Telegram Desktop.

For license and copyright information please follow this link:
https://github.com/fajox1/fagramdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/rp_widget.h"
#include "info/media/info_media_widget.h"

namespace Ui {
class FlatLabel;
} // namespace Ui

namespace Info {
namespace Media {

class EmptyWidget : public Ui::RpWidget {
public:
	EmptyWidget(QWidget *parent);

	void setFullHeight(rpl::producer<int> fullHeightValue);
	void setType(Type type);
	void setSearchQuery(const QString &query);

protected:
	void paintEvent(QPaintEvent *e) override;

	int resizeGetHeight(int newWidth) override;

private:
	object_ptr<Ui::FlatLabel> _text;
	Type _type = Type::kCount;
	const style::icon *_icon = nullptr;
	int _height = 0;

};

} // namespace Media
} // namespace Info
