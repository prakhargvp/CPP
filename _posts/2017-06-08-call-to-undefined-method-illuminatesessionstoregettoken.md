---
ID: 54
post_title: >
  Call to undefined method
  Illuminate\Session\Store::getToken()
author: prakhargvp@gmail.com
post_date: 2017-06-08 02:06:38
post_excerpt: ""
layout: post
permalink: >
  http://blog.prakhar.info/call-to-undefined-method-illuminatesessionstoregettoken/
published: true
---
FatalErrorException in BootstrapperL5ServiceProvider.php line 210:
Call to undefined method Illuminate\Session\Store::getToken()
According to the upgrade docs, this should become ->token()

This is a Upgrade Problem.
All calls to the ->getToken() method should be changed to ->token().