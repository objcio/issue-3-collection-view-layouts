# WeekCalendarLayout

A custom `UICollectionViewLayout`.


A sample project for [objc.io Issue #3](http://www.objc.io/issue-3).
Written by [Ole Begemann](http://oleb.net), August 2013.

Please see the [article](http://www.objc.io/issue-3/collection-view-layouts.html) for a discussion of the code.

Note that this project is only sample code and not intended to be used directly in production. In order to make the code easier to understand, I use simplified date calculations that assume a constant 7 days per week and 24 hours per day and are not based on a real calendar. To use this layout in a real calendar app, you would have to replace the computations with real `NSCalendar`-based date calculations.
