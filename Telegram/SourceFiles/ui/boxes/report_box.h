/*
This file is part of FAgram Desktop,
the unofficial desktop client based on Telegram Desktop.

For license and copyright information please follow this link:
https://github.com/fajox1/fagramdesktop/blob/master/LEGAL
*/
#pragma once

namespace style {
struct ReportBox;
} // namespace style

namespace Ui {

class GenericBox;

enum class ReportSource {
	Message,
	Channel,
	Group,
	Bot,
	ProfilePhoto,
	ProfileVideo,
	GroupPhoto,
	GroupVideo,
	ChannelPhoto,
	ChannelVideo,
	Story,
};

enum class ReportReason {
	Spam,
	Fake,
	Violence,
	ChildAbuse,
	Pornography,
	Copyright,
	IllegalDrugs,
	PersonalDetails,
	Other,
};

void ReportReasonBox(
	not_null<GenericBox*> box,
	const style::ReportBox &st,
	ReportSource source,
	Fn<void(ReportReason)> done);

void ReportDetailsBox(
	not_null<GenericBox*> box,
	const style::ReportBox &st,
	Fn<void(QString)> done);

} // namespace Ui
