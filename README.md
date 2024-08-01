# MYNT® EYE S SDK

[![](https://img.shields.io/badge/MYNT%20EYE%20S%20SDK-2.5.0-brightgreen.svg?style=flat)](https://github.com/slightech/MYNT-EYE-S-SDK)

## Overview

MYNT® EYE S SDK is a cross-platform library for MYNT® EYE Standard cameras.

Due to lack of updates there was no support for Ubuntu 22.04. <br>
This is a patch to make the SDK compatible for Ubuntu 22.04.

The following platforms have been tested:

* Ubuntu 22.04

Please follow the guide doc to install the SDK on different platforms.

## Documentations

* [API Doc](https://github.com/slightech/MYNT-EYE-S-SDK/releases): API reference, some guides and data spec.
  * en: [![](https://img.shields.io/badge/Download-PDF-blue.svg?style=flat)](https://readthedocs.org/projects/mynt-eye-s-sdk/downloads/pdf/latest/) [![](https://img.shields.io/badge/Download-HTML-blue.svg?style=flat)](https://readthedocs.org/projects/mynt-eye-s-sdk/downloads/htmlzip/latest/) [![](https://img.shields.io/badge/Online-HTML-blue.svg?style=flat)](https://mynt-eye-s-sdk.readthedocs.io/en/latest/)
  * zh-Hans: [![](https://img.shields.io/badge/Download-PDF-blue.svg?style=flat)](https://readthedocs.org/projects/mynt-eye-s-sdk-docs-zh-cn/downloads/pdf/latest/) [![](https://img.shields.io/badge/Download-HTML-blue.svg?style=flat)](https://readthedocs.org/projects/mynt-eye-s-sdk-docs-zh-cn/downloads/htmlzip/latest/) [![](https://img.shields.io/badge/Online-HTML-blue.svg?style=flat)](https://mynt-eye-s-sdk-docs-zh-cn.readthedocs.io/zh_CN/latest/)

> Supported languages: `en`, `zh-Hans`.

## Firmwares

[MYNTEYE_BOX]: http://doc.myntai.com/mynteye/s/download

Get firmwares from our online disks: [MYNTEYE_BOX][].

## Usage

In short,

```bash
$ make
Usage:
  make help            show help message
  make apidoc          make api doc
  make opendoc         open api doc (html)
  make init            init project
  make build           build project
  make test            build test and run
  make install         install project
  make samples         build samples
  make tools           build tools
  make ros             build ros wrapper
  make clean|cleanall  clean generated or useless things
```

Init project, build samples and run someone.

```bash
make init
make samples
./samples/_output/bin/camera_with_junior_device_api
```

## Mirrors

国内镜像：[码云](https://gitee.com/mynt/MYNT-EYE-S-SDK)。

## Changes

- ```make install``` resulted a build error. [This discussion](https://github.com/slightech/MYNT-EYE-S-SDK/issues/85) had a fix by modifying synthetic.cc file.<br>
- ```make samples``` had a c++ version issue, modifying config files for c++ version according to [this discussion](https://blog.csdn.net/m0_58355521/article/details/136663427) fixed the issue.

## License

This project is licensed under the [Apache License, Version 2.0](LICENSE). Copyright 2018 Slightech Co., Ltd.
