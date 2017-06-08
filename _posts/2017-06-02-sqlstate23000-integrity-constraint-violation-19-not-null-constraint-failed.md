---
ID: 35
post_title: 'SQLSTATE[23000]: Integrity constraint violation: 19 NOT NULL constraint failed:'
author: prakhargvp@gmail.com
post_date: 2017-06-02 02:18:36
post_excerpt: ""
layout: post
permalink: >
  http://blog.prakhar.info/sqlstate23000-integrity-constraint-violation-19-not-null-constraint-failed/
published: true
---
That means there are some columns in the Sqlite table which have not null constraint and you are inserting/updating null value.

So there are two options to short out this Error.
1. Provide a value which is not NULL
2. Change the not null Constraint of column of the table.