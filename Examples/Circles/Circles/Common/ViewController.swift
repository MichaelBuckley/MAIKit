//
//  ViewController.swift
//  Circles
//
//  Created by Buckley on 6/14/15.
//  Copyright © 2015 Buckleyisms. All rights reserved.
//

import MAIKit

class ViewController: MAIViewController {

    weak var circlesView : CirclesView? = nil
    @IBOutlet weak var clearButton : MAIButtonProtocol? = nil

    override func viewDidLoad()
    {
        super.viewDidLoad()

        self.clearButton?.isEnabled = false

        NotificationCenter.default().addObserver(
            self,
            selector: #selector(ViewController.circleDrawn(_:)),
            name: "circleDrawn",
            object: nil
        )
    }

    @IBAction func clear(_ sender: AnyObject)
    {
        self.circlesView?.clear()
        self.clearButton?.isEnabled = false
    }

    @objc func circleDrawn(_ notification: NSNotification?)
    {
        self.clearButton?.isEnabled = true
    }

}
