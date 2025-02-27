---
image: /img/bookmarks.png
---

# افزونه مرورگر همراه وب QOwnNotes

امکان برش زدن از صفحه مرورگر و مدیریت نشانک های مرورگر را در مرورگرها و سیستم های عامل فراهم می کند.

::: tip
Info
- QOwnNote برای کار باید با افزونه مرورگر همراه وب اجرا شود.
- نیازی به اتصال اینترنت نیست. افزونه های مرورگر به صورت **آفلاین** کار می کنند.
:::

## نصب

1. دریافت افزونه
    - [کروم وب استور](https://chrome.google.com/webstore/detail/qownnotes-web-companion/pkgkfnampapjbopomdpnkckbjdnpkbkp)
    - [صفحه افزونه های فایرفاکس](https://addons.mozilla.org/firefox/addon/qownnotes-web-companion)
    - شما می توانید افزونه را در [گیت هاب](https://github.com/qownnotes/web-companion/) نیز پیدا کنید.
2. برای پیکربندی افزونه توکن امنیتی را اضافه کنید.
    - نخستین باری که روی آیکون افزونه مرورگر QOwnNotes کلیک کنید، کادر محاوره ای با توکن امنیتی دریافت خواهید کرد. رونوشت برداری توکن.
    - به مکان مدیریت افزونه مرورگر خود بروید. روی جزئیات افزونه QOwnNotes کلیک کنید.
    - توکن را در قسمت توکن امنیتی بچسبانید.

## وب کلیپر

![وب کلیپر](/img/web-clipper.png)

به منظور استفاده کارآمد از **وب کلیپر** بر روی یک صفحه وب یا متن منتخب کلیک راست کنید.  علاوه بر این، می توانید یک یادداشت جدید را با **نماگرفتی** از صفحه وب کنونی ایجاد نمایید.

::: tip
وب کلیپر هم قابل اسکریپت نویسی می باشد! در صورت تمایل به کنترل آنچه که از صفحات وب برش می زنید، نگاهی به [websocketRawDataHook](../scripting/hooks.md#websocketrawdatahook) بیندازید.
:::

## نشانک ها

![نشانک ها](/img/bookmarks.png)

در صورت تمایل به کنترل کامل نشانک های مرورگر خود و **استفاده از آنها در مرورگرها و سیستم عامل های مختلف** می‌توانید از افزونه مرورگر QOwnNotes بهره گیرید.

هنگام کلیک روی شمایل QOwnNotes در مرورگرتان، افزونه مرورگر به صورت پیش فرض همه **پیوند های یادداشت کنونی** را در یک پنجره پاپ آپ نشان می دهد. این پیوندها یک برچسب `کنونی` می گیرند.

همچنین می توانید با `نشانک های` برچسب یادداشت (قابل تغییر در تنظیمات) **نشانک های خود را در یادداشت ها مدیریت کنید**. این پیوند ها همچنین برچسب ها و توضیحی دارند که در افزونه مرورگر نشان داده می شود.

نشانک های جدید در یادداشتی با نام `نشانک ها` ذخیره شده‌اند (همچنین در بخش تنظیمات قابل تغییر هستند).

::: tip
علاوه بر این می توانید نشانک های مرورگر خود را با افزونه مرورگر همراه وب در QOwnNotes وارد نمایید!
:::

### چیدمان پیوندهای نشانک

```markdown
- [نام صفحه وب](https://www.example.com)
- [نام صفحه وب](https://www.example.com) #برچسب1 #برچسب2
- [نام صفحه وب](https://www.example.com) فقط مقداری توضیح
- [نام صفحه وب](https://www.example.com) #برچسب1 #برچسب2 مقداری توضیح و برچسب ها
* [نام صفحه وب](https://www.example.com) نویسه لیست جایگزین هم کار می کند
```

شما این امکان را دارید که نام، URL برچسب ها یا توضیح را در افزونه مرورگر جستجو کنید.
