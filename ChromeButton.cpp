﻿#include "pch.h"

#include "ChromeButton.h"
#if __has_include("ChromeButton.g.cpp")
#include "ChromeButton.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI;
using namespace Windows::UI::Xaml;

namespace winrt::BlankApp4::implementation
{
	DependencyProperty ChromeButton::s_IconProperty =
		DependencyProperty::Register(
			L"Icon",
			xaml_typename<Controls::IconElement>(),
			xaml_typename<class_type>(),
			nullptr
		);

	DependencyProperty ChromeButton::s_NormalForegroundProperty =
		DependencyProperty::Register(
			L"NormalForeground",
			xaml_typename<Color>(),
			xaml_typename<class_type>(),
			PropertyMetadata{ box_value(Colors::Transparent()) }
	);

	DependencyProperty ChromeButton::s_NormalBackgroundProperty =
		DependencyProperty::Register(
			L"NormalBackground",
			xaml_typename<Color>(),
			xaml_typename<class_type>(),
			PropertyMetadata{ box_value(Colors::Transparent()) }
	);

	DependencyProperty ChromeButton::s_HoverForegroundProperty =
		DependencyProperty::Register(
			L"HoverForeground",
			xaml_typename<Color>(),
			xaml_typename<class_type>(),
			PropertyMetadata{ box_value(Colors::Transparent()) }
	);

	DependencyProperty ChromeButton::s_HoverBackgroundProperty =
		DependencyProperty::Register(
			L"HoverBackground",
			xaml_typename<Color>(),
			xaml_typename<class_type>(),
			PropertyMetadata{ box_value(Colors::Transparent()) }
	);

	DependencyProperty ChromeButton::s_PressedForegroundProperty =
		DependencyProperty::Register(
			L"PressedForeground",
			xaml_typename<Color>(),
			xaml_typename<class_type>(),
			PropertyMetadata{ box_value(Colors::Transparent()) }
	);

	DependencyProperty ChromeButton::s_PressedBackgroundProperty =
		DependencyProperty::Register(
			L"PressedBackground",
			xaml_typename<Color>(),
			xaml_typename<class_type>(),
			PropertyMetadata{ box_value(Colors::Transparent()) }
	);

	ChromeButton::ChromeButton()
	{
		InitializeComponent();
	}

	Windows::UI::Xaml::Controls::IconElement ChromeButton::Icon()
	{
		return GetValue(s_IconProperty).as<Controls::IconElement>();
	}

	void ChromeButton::Icon(Windows::UI::Xaml::Controls::IconElement icon)
	{
		SetValue(s_IconProperty, icon);
	}

	Windows::UI::Xaml::DependencyProperty ChromeButton::IconProperty() noexcept
	{
		return s_IconProperty;
	}

	Color ChromeButton::NormalForeground()
	{
		return unbox_value<Color>(GetValue(s_NormalForegroundProperty));
	}

	void ChromeButton::NormalForeground(const Color& color)
	{
		SetValue(s_NormalForegroundProperty, box_value(color));
	}

	Windows::UI::Xaml::DependencyProperty ChromeButton::NormalForegroundProperty() noexcept
	{
		return s_NormalForegroundProperty;
	}

	Color ChromeButton::NormalBackground()
	{
		return unbox_value<Color>(GetValue(s_NormalBackgroundProperty));
	}

	void ChromeButton::NormalBackground(const Color& color)
	{
		SetValue(s_NormalBackgroundProperty, box_value(color));
	}

	Windows::UI::Xaml::DependencyProperty ChromeButton::NormalBackgroundProperty() noexcept
	{
		return s_NormalBackgroundProperty;
	}

	Color ChromeButton::HoverForeground()
	{
		return unbox_value<Color>(GetValue(s_HoverForegroundProperty));
	}

	void ChromeButton::HoverForeground(const Color& color)
	{
		SetValue(s_HoverForegroundProperty, box_value(color));
	}

	Windows::UI::Xaml::DependencyProperty ChromeButton::HoverForegroundProperty() noexcept
	{
		return s_HoverForegroundProperty;
	}

	Color ChromeButton::HoverBackground()
	{
		return unbox_value<Color>(GetValue(s_HoverBackgroundProperty));
	}

	void ChromeButton::HoverBackground(const Color& color)
	{
		SetValue(s_HoverBackgroundProperty, box_value(color));
	}

	Windows::UI::Xaml::DependencyProperty ChromeButton::HoverBackgroundProperty() noexcept
	{
		return s_HoverBackgroundProperty;
	}

	Color ChromeButton::PressedForeground()
	{
		return unbox_value<Color>(GetValue(s_PressedForegroundProperty));
	}

	void ChromeButton::PressedForeground(const Color& color)
	{
		SetValue(s_PressedForegroundProperty, box_value(color));
	}

	Windows::UI::Xaml::DependencyProperty ChromeButton::PressedForegroundProperty() noexcept
	{
		return s_PressedForegroundProperty;
	}

	Color ChromeButton::PressedBackground()
	{
		return unbox_value<Color>(GetValue(s_PressedBackgroundProperty));
	}

	void ChromeButton::PressedBackground(const Color& color)
	{
		SetValue(s_PressedBackgroundProperty, box_value(color));
	}

	Windows::UI::Xaml::DependencyProperty ChromeButton::PressedBackgroundProperty() noexcept
	{
		return s_PressedBackgroundProperty;
	}
}
