//
//  ViewController.swift
//  Circles
//
//  Created by Buckley on 6/14/15.
//  Copyright © 2015 Buckleyisms. All rights reserved.
//

import MAIKit

class ViewController: MAIViewController {

    @IBOutlet weak var circlesView : CirclesView? = nil
    @IBOutlet weak var clearButton : MAIButtonProtocol? = nil

    override func viewDidLoad()
    {
        super.viewDidLoad()

        self.clearButton?.enabled = false

        NSNotificationCenter.defaultCenter().addObserver(
            self,
            selector: "circleDrawn:",
            name: "circleDrawn",
            object: nil
        )
    }

    @IBAction func clear(sender: AnyObject)
    {
        self.circlesView?.clear()
        self.clearButton?.enabled = false
    }

    @objc func circleDrawn(notification: NSNotification?)
    {
        self.clearButton?.enabled = true
    }

}

