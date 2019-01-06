/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // Make sure you set the size of the component after
    // you add any child components.
    setSize (800, 600);

    // specify the number of input and output channels that we want to open
    setAudioChannels (2, 2);
    
    slider1.setSliderStyle(Slider::SliderStyle::LinearVertical);
    slider1.setColour(Slider::backgroundColourId, Colours::red);
    slider1.setRange(0.0, 1.0);
    slider1.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    addAndMakeVisible(slider1);
    
    slider2.setSliderStyle(Slider::SliderStyle::LinearVertical);
    slider2.setColour(Slider::backgroundColourId, Colours::blue);
    slider2.setRange(0.0, 1.0);
    slider2.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    addAndMakeVisible(slider2);
    
    slider3.setSliderStyle(Slider::SliderStyle::LinearVertical);
    slider3.setColour(Slider::backgroundColourId, Colours::greenyellow);
    slider3.setRange(0.0, 1.0);
    slider3.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    addAndMakeVisible(slider3);
    
    slider4.setSliderStyle(Slider::SliderStyle::Rotary);
    slider4.setColour(Slider::backgroundColourId, Colours::ivory);
    slider4.setRange(0.0, 1.0);
    slider4.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    addAndMakeVisible(slider4);
    
    slider5.setSliderStyle(Slider::SliderStyle::Rotary);
    slider5.setColour(Slider::backgroundColourId, Colours::violet);
    slider5.setRange(0.0, 1.0);
    slider5.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    addAndMakeVisible(slider5);
    
    slider6.setSliderStyle(Slider::SliderStyle::Rotary);
    slider6.setColour(Slider::backgroundColourId, Colours::navajowhite);
    slider6.setRange(0.0, 1.0);
    slider6.setTextBoxStyle(Slider::NoTextBox, true, 0, 0);
    addAndMakeVisible(slider6);
    
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!

    // For more details, see the help for AudioProcessor::getNextAudioBlock()

    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
    bufferToFill.clearActiveBufferRegion();
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    // You can add your drawing code here!
}

void MainComponent::resized()
{
    
}
